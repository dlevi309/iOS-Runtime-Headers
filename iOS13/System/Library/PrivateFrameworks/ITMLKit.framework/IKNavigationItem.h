/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKAppDocument, NSDictionary;

@interface IKNavigationItem : NSObject {

	IKAppDocument* _document;
	NSDictionary* _options;

}

@property (nonatomic,retain) IKAppDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setDocument:(IKAppDocument *)arg1 ;
-(IKAppDocument *)document;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
@end

