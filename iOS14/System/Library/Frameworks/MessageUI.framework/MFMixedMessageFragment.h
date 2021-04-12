/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {

	NSString* _markupString;
	NSData* _markupData;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSURL* _baseURL;

}
-(id)mimeType;
-(id)baseURL;
-(id)description;
-(id)markupString;
-(id)markupData;
-(id)encodingName;
-(id)initWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
@end

