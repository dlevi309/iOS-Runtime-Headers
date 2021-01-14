/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <CoreFoundation/NSEnumerator.h>

@class MPCQueueController, NSEnumerator, MPSectionedIdentifierListPosition;

@interface _MPCQueueControllerEnumerator : NSEnumerator {

	long long _nextEnumerator;
	BOOL _isEnumeratingFromRepeatAllBase;
	BOOL _hasEmittedItemFromRepeatAllBase;
	MPCQueueController* _queueController;
	long long _mode;
	unsigned long long _options;
	NSEnumerator* _enumerator;
	MPSectionedIdentifierListPosition* _startPosition;
	MPSectionedIdentifierListPosition* _endPosition;

}

@property (nonatomic,__weak,readonly) MPCQueueController * queueController;                    //@synthesize queueController=_queueController - In the implementation block
@property (nonatomic,readonly) long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSEnumerator * enumerator;                                      //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierListPosition * startPosition;              //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierListPosition * endPosition;                //@synthesize endPosition=_endPosition - In the implementation block
+(id)enumeratorWithQueueController:(id)arg1 mode:(long long)arg2 options:(unsigned long long)arg3 startPosition:(id)arg4 endPosition:(id)arg5 ;
-(id)nextObject;
-(long long)mode;
-(unsigned long long)options;
-(void)_buildEnumerator;
-(NSEnumerator *)enumerator;
-(MPSectionedIdentifierListPosition *)endPosition;
-(MPSectionedIdentifierListPosition *)startPosition;
-(MPCQueueController *)queueController;
-(id)_init;
@end

