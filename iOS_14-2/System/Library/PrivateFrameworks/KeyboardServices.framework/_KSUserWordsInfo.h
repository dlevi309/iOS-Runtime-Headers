/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRecord:(id)arg1 ;
-(id)description;
-(BOOL)isBetterThan:(id)arg1 ;
-(id)initWithFiles:(id)arg1 ;
-(void)saveToRecord:(id)arg1 ;
@end

