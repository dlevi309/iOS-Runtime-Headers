/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class MKTileOverlayRequester, NSObject, NSData;

@interface MKTileOverlayRequesterOp : NSObject {

	GEOTileKey _key;
	MKTileOverlayRequester* _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _data;

}

@property (assign,nonatomic) GEOTileKey key;                                          //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MKTileOverlayRequester * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSData * data;                                           //@synthesize data=_data - In the implementation block
-(GEOTileKey)key;
-(MKTileOverlayRequester *)delegate;
-(void)setDelegate:(MKTileOverlayRequester *)arg1 ;
-(NSData *)data;
-(void)cancel;
-(void)setData:(NSData *)arg1 ;
-(void)start;
-(void)setKey:(GEOTileKey)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

