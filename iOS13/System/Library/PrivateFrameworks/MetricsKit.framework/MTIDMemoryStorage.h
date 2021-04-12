/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDStorage.h>

@class NSMutableDictionary, NSString;

@interface MTIDMemoryStorage : NSObject <MTIDStorage> {

	NSMutableDictionary* _namespaces;

}

@property (nonatomic,retain) NSMutableDictionary * namespaces;              //@synthesize namespaces=_namespaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(BOOL)arg3 ;
-(id)deleteNamespace:(id)arg1 ;
-(id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2 ;
-(NSMutableDictionary *)namespaces;
-(void)setNamespaces:(NSMutableDictionary *)arg1 ;
@end

