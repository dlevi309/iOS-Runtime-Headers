/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject {

	NSArray* _textCheckingResults;
	NSNumber* _number;
	NSArray* _dictionaries;
	WFFileType* _dictionaryType;

}

@property (nonatomic,readonly) NSArray * textCheckingResults;              //@synthesize textCheckingResults=_textCheckingResults - In the implementation block
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) NSArray * streetAddresses; 
@property (nonatomic,readonly) NSArray * phoneNumbers; 
@property (nonatomic,readonly) NSArray * dates; 
@property (nonatomic,readonly) NSNumber * number;                          //@synthesize number=_number - In the implementation block
@property (nonatomic,readonly) NSArray * dictionaries;                     //@synthesize dictionaries=_dictionaries - In the implementation block
@property (nonatomic,readonly) WFFileType * dictionaryType;                //@synthesize dictionaryType=_dictionaryType - In the implementation block
-(id)init;
-(NSArray *)URLs;
-(NSArray *)phoneNumbers;
-(NSNumber *)number;
-(NSArray *)dates;
-(NSArray *)dictionaries;
-(NSArray *)streetAddresses;
-(id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4 ;
-(NSArray *)textCheckingResults;
-(WFFileType *)dictionaryType;
@end

