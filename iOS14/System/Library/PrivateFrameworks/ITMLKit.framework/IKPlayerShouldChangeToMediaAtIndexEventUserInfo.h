/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldChange;
	long long _index;

}

@property (nonatomic,readonly) long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL shouldChange;                      //@synthesize shouldChange=_shouldChange - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)index;
-(NSDictionary *)properties;
-(id)initWithIndex:(long long)arg1 ;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)expectsReturnValue;
-(BOOL)shouldChange;
@end

