/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSString, NSMutableString;

@interface MSVLyricsXMLElement : NSObject {

	NSString* _elementName;
	NSString* _identifier;
	NSMutableString* _mutableText;

}

@property (nonatomic,copy) NSString * elementName;                       //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableString * mutableText;              //@synthesize mutableText=_mutableText - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)elementName;
-(void)setElementName:(NSString *)arg1 ;
-(NSMutableString *)mutableText;
-(void)setMutableText:(NSMutableString *)arg1 ;
@end

