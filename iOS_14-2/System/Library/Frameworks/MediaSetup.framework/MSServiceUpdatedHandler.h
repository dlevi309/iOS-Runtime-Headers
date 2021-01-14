/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/


@protocol MediaServiceUpdatedClientDelegate;
@interface MSServiceUpdatedHandler : NSObject {

	id<MediaServiceUpdatedClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MediaServiceUpdatedClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)shared;
-(id<MediaServiceUpdatedClientDelegate>)delegate;
-(void)setDelegate:(id<MediaServiceUpdatedClientDelegate>)arg1 ;
-(void)mediaServiceChanged:(id)arg1 homeUserID:(id)arg2 ;
-(void)mediaServiceRemoved:(id)arg1 homeUserID:(id)arg2 ;
-(void)defaultMediaServiceUpdated:(id)arg1 homeUserID:(id)arg2 ;
@end

