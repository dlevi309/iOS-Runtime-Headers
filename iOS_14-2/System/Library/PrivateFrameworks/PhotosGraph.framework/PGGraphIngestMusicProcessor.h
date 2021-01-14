/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface PGGraphIngestMusicProcessor : NSObject <PGGraphIngestProcessor> {

	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)nowPlayingStreamConverterOptions;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_ingestStreamEventSession:(id)arg1 graph:(id)arg2 performerNodesByName:(id)arg3 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)processMusicForGraph:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

