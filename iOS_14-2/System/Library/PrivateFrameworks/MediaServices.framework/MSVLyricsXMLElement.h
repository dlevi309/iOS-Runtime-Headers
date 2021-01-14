/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)elementName;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setElementName:(NSString *)arg1 ;
-(NSMutableString *)mutableText;
-(void)setMutableText:(NSMutableString *)arg1 ;
@end

