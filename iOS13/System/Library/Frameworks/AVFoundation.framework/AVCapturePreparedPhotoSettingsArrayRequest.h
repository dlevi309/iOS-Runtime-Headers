/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {

	unsigned long long _requestID;
	NSArray* _photoSettingsArray;
	/*^block*/id _completionHandler;
	BOOL _completed;

}

@property (readonly) unsigned long long requestID; 
@property (readonly) NSArray * photoSettingsArray; 
@property (readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
+(id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned long long)requestID;
-(id)_initWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setRequestID:(unsigned long long)arg1 ;
-(NSArray *)photoSettingsArray;
-(BOOL)isCompleted;
@end

