/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject {

	NSOperation* _operation;

}

@property (nonatomic,retain) NSOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(id)initWithOperation:(id)arg1 ;
-(void)setOperation:(NSOperation *)arg1 ;
-(id)init;
-(NSOperation *)operation;
-(void)cancel;
@end

