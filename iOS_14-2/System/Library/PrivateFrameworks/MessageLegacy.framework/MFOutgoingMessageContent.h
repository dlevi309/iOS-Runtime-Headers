/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class MFMutableMessageHeaders, NSArray, MFOutgoingLibraryMessageContent, MFOutgoingRichtextMessageContent, MFOutgoingMultipartRelatedContent;

@interface MFOutgoingMessageContent : NSObject {

	MFMutableMessageHeaders* _headers;
	NSArray* _placeholders;

}

@property (nonatomic,retain) MFMutableMessageHeaders * headers;                                   //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSArray * placeholders;                                              //@synthesize placeholders=_placeholders - In the implementation block
@property (nonatomic,readonly) MFOutgoingLibraryMessageContent * libraryContent; 
@property (nonatomic,readonly) MFOutgoingRichtextMessageContent * richtextContent; 
@property (nonatomic,readonly) MFOutgoingMultipartRelatedContent * multipartContent; 
-(NSArray *)placeholders;
-(void)setPlaceholders:(NSArray *)arg1 ;
-(MFOutgoingLibraryMessageContent *)libraryContent;
-(MFOutgoingRichtextMessageContent *)richtextContent;
-(MFOutgoingMultipartRelatedContent *)multipartContent;
-(id)copy;
-(MFMutableMessageHeaders *)headers;
-(void)setHeaders:(MFMutableMessageHeaders *)arg1 ;
@end

