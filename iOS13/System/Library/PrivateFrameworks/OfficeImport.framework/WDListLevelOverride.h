/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {

	WDDocument* mDocument;
	WDListLevel* mListLevel;
	unsigned char mLevel;
	long long mStartNumber;
	BOOL mStartNumberOverridden;

}
-(id)description;
-(unsigned char)level;
-(BOOL)isListLevelOverridden;
-(id)listLevel;
-(long long)startNumber;
-(void)setStartNumber:(long long)arg1 ;
-(id)mutableListLevel;
-(BOOL)isStartNumberOverridden;
-(id)initWithDocument:(id)arg1 level:(unsigned char)arg2 ;
@end

