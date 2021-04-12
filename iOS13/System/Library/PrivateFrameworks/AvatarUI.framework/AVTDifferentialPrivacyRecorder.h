/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTDifferentialPrivacyRecorder.h>

@protocol AVTDifferentialPrivacyRecorder
@required
-(void)recordString:(id)arg1 forKey:(id)arg2;
-(void)recordNumber:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary;

@interface AVTDifferentialPrivacyRecorder : NSObject <AVTDifferentialPrivacyRecorder> {

	/*^block*/id _stringRecorderProvider;
	/*^block*/id _numRecorderProvider;
	NSMutableDictionary* _stringRecorders;
	NSMutableDictionary* _numRecorders;

}

@property (nonatomic,copy,readonly) id stringRecorderProvider;                     //@synthesize stringRecorderProvider=_stringRecorderProvider - In the implementation block
@property (nonatomic,copy,readonly) id numRecorderProvider;                        //@synthesize numRecorderProvider=_numRecorderProvider - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stringRecorders;              //@synthesize stringRecorders=_stringRecorders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * numRecorders;                 //@synthesize numRecorders=_numRecorders - In the implementation block
+(/*^block*/id)makeCachingStringRecorderProvider:(/*^block*/id)arg1 ;
+(/*^block*/id)makeCachingNumRecorderProvider:(/*^block*/id)arg1 ;
-(id)init;
-(NSMutableDictionary *)numRecorders;
-(void)recordString:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStringRecorderProvider:(/*^block*/id)arg1 numericDataRecorderProvider:(/*^block*/id)arg2 ;
-(id)stringRecorderProvider;
-(id)numRecorderProvider;
-(void)recordNumber:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)stringRecorders;
@end

