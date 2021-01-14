/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerTimedMetadataEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	NSString* _key;
	NSDictionary* _value;

}

@property (nonatomic,copy,readonly) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)properties;
-(NSString *)key;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)value;
@end

