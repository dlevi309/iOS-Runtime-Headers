/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MKTileOverlayRequester *)delegate;
-(void)start;
-(void)setData:(NSData *)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(MKTileOverlayRequester *)arg1 ;
-(NSData *)data;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(GEOTileKey)key;
-(void)cancel;
-(void)setKey:(GEOTileKey)arg1 ;
@end

