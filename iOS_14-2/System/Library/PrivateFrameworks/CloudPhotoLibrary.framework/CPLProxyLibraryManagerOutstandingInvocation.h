/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSError, CPLResource, NSData;

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject {

	BOOL _inMemoryRequest;
	BOOL _didStart;
	BOOL _didFinish;
	float _progress;
	NSError* _finalError;
	CPLResource* _finalResource;
	NSData* _finalData;

}

@property (assign,getter=isInMemoryRequest,nonatomic) BOOL inMemoryRequest;              //@synthesize inMemoryRequest=_inMemoryRequest - In the implementation block
@property (assign,nonatomic) BOOL didStart;                                              //@synthesize didStart=_didStart - In the implementation block
@property (assign,nonatomic) float progress;                                             //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                                             //@synthesize didFinish=_didFinish - In the implementation block
@property (nonatomic,retain) NSError * finalError;                                       //@synthesize finalError=_finalError - In the implementation block
@property (nonatomic,retain) CPLResource * finalResource;                                //@synthesize finalResource=_finalResource - In the implementation block
@property (nonatomic,retain) NSData * finalData;                                         //@synthesize finalData=_finalData - In the implementation block
-(float)progress;
-(id)description;
-(void)setProgress:(float)arg1 ;
-(void)setDidFinish:(BOOL)arg1 ;
-(BOOL)didStart;
-(BOOL)didFinish;
-(BOOL)isInMemoryRequest;
-(CPLResource *)finalResource;
-(NSError *)finalError;
-(NSData *)finalData;
-(void)setDidStart:(BOOL)arg1 ;
-(void)setFinalError:(NSError *)arg1 ;
-(void)setFinalResource:(CPLResource *)arg1 ;
-(void)setInMemoryRequest:(BOOL)arg1 ;
-(void)setFinalData:(NSData *)arg1 ;
@end

