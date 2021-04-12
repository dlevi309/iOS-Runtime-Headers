/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKExtensionRegistry.h>

@class NSMutableDictionary, NSSet, NSString;

@interface DKReporterRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _generatorLookup;
	NSMutableDictionary* _componentDedup;

}

@property (nonatomic,retain) NSMutableDictionary * generatorLookup;              //@synthesize generatorLookup=_generatorLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * componentDedup;               //@synthesize componentDedup=_componentDedup - In the implementation block
@property (nonatomic,readonly) NSSet * components; 
@property (nonatomic,readonly) NSSet * generators; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
-(id)init;
-(NSSet *)components;
-(NSSet *)generators;
-(NSMutableDictionary *)generatorLookup;
-(NSMutableDictionary *)componentDedup;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(id)generatorForComponentIdentity:(id)arg1 ;
-(void)setGeneratorLookup:(NSMutableDictionary *)arg1 ;
-(void)setComponentDedup:(NSMutableDictionary *)arg1 ;
@end

