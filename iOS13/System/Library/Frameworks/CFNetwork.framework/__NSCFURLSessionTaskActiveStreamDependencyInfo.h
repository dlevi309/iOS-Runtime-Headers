/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSNumber, NSMutableDictionary;

@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject {

	NSNumber* _streamID;
	NSMutableDictionary* _mainDocumentTaskURLs;
	NSMutableDictionary* _mainDocumentTaskMimeTypes;

}

@property (nonatomic,retain) NSNumber * _streamID;                                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mainDocumentTaskURLs;                   //@synthesize mainDocumentTaskURLs=_mainDocumentTaskURLs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mainDocumentTaskMimeTypes;              //@synthesize mainDocumentTaskMimeTypes=_mainDocumentTaskMimeTypes - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(NSNumber *)_streamID;
-(NSMutableDictionary *)_mainDocumentTaskURLs;
-(NSMutableDictionary *)_mainDocumentTaskMimeTypes;
-(id)initWithStreamID:(id)arg1 requestURLString:(id)arg2 dependencyInfo:(id)arg3 ;
-(void)addNewStreamID:(id)arg1 requestURLString:(id)arg2 ;
-(int)parentStreamIDForURLString:(id)arg1 ;
-(int)parentStreamIDForMimeType:(id)arg1 ;
-(void)removeStreamWithStreamID:(id)arg1 requestURLString:(id)arg2 ;
-(void)set_streamID:(NSNumber *)arg1 ;
-(void)set_mainDocumentTaskURLs:(NSMutableDictionary *)arg1 ;
-(void)set_mainDocumentTaskMimeTypes:(NSMutableDictionary *)arg1 ;
@end

