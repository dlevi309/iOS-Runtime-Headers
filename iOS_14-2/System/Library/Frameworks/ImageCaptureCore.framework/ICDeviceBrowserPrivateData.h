/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {

	id _delegate;
	BOOL _browsing;
	NSMutableArray* _internalDevices;
	BOOL _suspended;

}

@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBrowsing) BOOL browsing;                      //@synthesize browsing=_browsing - In the implementation block
@property (getter=isSuspended) BOOL suspended;                    //@synthesize suspended=_suspended - In the implementation block
@property (retain) NSMutableArray * internalDevices;              //@synthesize internalDevices=_internalDevices - In the implementation block
-(void)setBrowsing:(BOOL)arg1 ;
-(NSMutableArray *)internalDevices;
-(BOOL)isBrowsing;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setInternalDevices:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

