/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSURL, NSString, NSSet;

@interface NPKTapToRadarRequest : NSObject {

	NSURL* _tapToRadarURL;
	NSString* _title;
	NSString* _body;
	NSSet* _attachmentsPaths;

}

@property (nonatomic,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * body;                       //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSSet * attachmentsPaths;              //@synthesize attachmentsPaths=_attachmentsPaths - In the implementation block
@property (nonatomic,readonly) NSURL * tapToRadarURL; 
-(NSString *)body;
-(id)initWithURL:(id)arg1 ;
-(id)description;
-(id)_attachmentURLs;
-(NSString *)title;
-(NSURL *)tapToRadarURL;
-(id)initWithTitle:(id)arg1 body:(id)arg2 attachmentPaths:(id)arg3 ;
-(NSSet *)attachmentsPaths;
@end

