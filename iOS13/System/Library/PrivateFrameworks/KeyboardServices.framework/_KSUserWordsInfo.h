/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@class NSDate, _KSFileEntry;

@interface _KSUserWordsInfo : NSObject {

	NSDate* _modifiedDate;
	unsigned long long _size;
	_KSFileEntry* _file;

}
+(id)keyboardDirectory;
+(id)keyNamesExcludingData;
+(id)keyForData;
+(id)filesForLanguage:(id)arg1 ;
+(id)infoWithFiles:(id)arg1 ;
+(id)infoWithRecord:(id)arg1 ;
-(id)description;
-(id)initWithRecord:(id)arg1 ;
-(id)initWithFiles:(id)arg1 ;
-(BOOL)isBetterThan:(id)arg1 ;
-(void)saveToRecord:(id)arg1 ;
@end

