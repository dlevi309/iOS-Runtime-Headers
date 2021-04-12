/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFiTunesStoreObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, NSString, WFTimeInterval, NSDictionary;

@interface WFiTunesMediaTrackObject : WFiTunesStoreObject <MTLJSONSerializing> {

	BOOL _streamable;
	BOOL _explicit;
	NSURL* _previewURL;
	NSString* _genre;
	WFTimeInterval* _duration;

}

@property (nonatomic,readonly) NSURL * previewURL;                               //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) WFTimeInterval * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL streamable;                                  //@synthesize streamable=_streamable - In the implementation block
@property (nonatomic,readonly) BOOL explicit;                                    //@synthesize explicit=_explicit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)durationJSONTransformer;
+(id)explicitJSONTransformer;
+(id)priceJSONTransformer;
-(WFTimeInterval *)duration;
-(NSString *)genre;
-(NSURL *)previewURL;
-(BOOL)explicit;
-(BOOL)streamable;
@end

