/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/


@class NSDictionary;

@interface AEOptionMirror : NSObject {

	NSDictionary* _rightOptionsByLeft;
	NSDictionary* _leftOptionsByRight;

}

@property (nonatomic,readonly) long long leftClearMask; 
@property (nonatomic,readonly) long long rightClearMask; 
-(id)initWithMirroredOptions:(id)arg1 ;
-(long long)leftOptionsFromRight:(long long)arg1 ;
-(long long)rightOptionsFromLeft:(long long)arg1 ;
-(long long)leftClearMask;
-(long long)rightClearMask;
@end

