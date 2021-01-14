/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKAppDocument, NSDictionary;

@interface IKNavigationItem : NSObject {

	IKAppDocument* _document;
	NSDictionary* _options;

}

@property (nonatomic,retain) IKAppDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                //@synthesize options=_options - In the implementation block
-(void)setDocument:(IKAppDocument *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(IKAppDocument *)document;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
@end

