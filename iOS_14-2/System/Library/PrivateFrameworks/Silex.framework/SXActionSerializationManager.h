/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionSerializer.h>
#import <libobjc.A.dylib/SXActionSerializationManager.h>

@protocol SXActionSerializationManager <NSObject>
@required
-(void)registerSerializer:(id)arg1 actionType:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface SXActionSerializationManager : NSObject <SXActionSerializer, SXActionSerializationManager> {

	NSMutableDictionary* _serializers;

}

@property (nonatomic,readonly) NSMutableDictionary * serializers;              //@synthesize serializers=_serializers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)serializers;
-(id)URLForAction:(id)arg1 type:(long long)arg2 ;
-(void)registerSerializer:(id)arg1 actionType:(id)arg2 ;
@end

