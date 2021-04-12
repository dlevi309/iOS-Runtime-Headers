/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldChange;
	long long _index;

}

@property (nonatomic,readonly) long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL shouldChange;                      //@synthesize shouldChange=_shouldChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(long long)index;
-(id)initWithIndex:(long long)arg1 ;
-(NSDictionary *)properties;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)expectsReturnValue;
-(BOOL)shouldChange;
@end

