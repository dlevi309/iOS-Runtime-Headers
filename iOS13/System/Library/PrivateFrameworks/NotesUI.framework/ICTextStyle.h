/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSDictionary, NSString;

@interface ICTextStyle : NSObject {

	unsigned _ttStyle;
	NSDictionary* _attributes;
	NSString* _name;

}

@property (retain) NSDictionary * attributes;                                //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign) unsigned ttStyle;                                         //@synthesize ttStyle=_ttStyle - In the implementation block
@property (nonatomic,readonly) NSString * icaxStyleDescription; 
@property (readonly) BOOL isTextList; 
+(id)titleStyle;
+(id)headingStyle;
+(id)subheadingStyle;
+(id)bodyStyle;
+(id)fixedWidthStyle;
+(id)bulletStyle;
+(id)dashStyle;
+(id)numberedStyle;
+(unsigned)validatedNamedStyle:(unsigned)arg1 ;
+(id)defaultTextStyles;
+(id)icaxStyleDescriptionForNamedStyle:(unsigned)arg1 ;
+(unsigned)noteDefaultNamedStyle;
+(void)setNoteDefaultNamedStyle:(unsigned)arg1 ;
+(id)titleForNamedStyle:(unsigned)arg1 ;
+(id)settingsDescriptionForNamedStyle:(unsigned)arg1 ;
+(id)styleForNamedStyle:(unsigned)arg1 ;
+(void)setAutoListInsertionEnabled:(BOOL)arg1 ;
+(BOOL)autoListInsertionEnabled;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(unsigned)ttStyle;
-(void)setTtStyle:(unsigned)arg1 ;
-(BOOL)isTextList;
-(NSString *)icaxStyleDescription;
@end

