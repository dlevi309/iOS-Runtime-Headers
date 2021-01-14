/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

