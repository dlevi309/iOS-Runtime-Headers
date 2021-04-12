/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString, NSDate;

@interface SKUIReleaseNote : NSObject {

	NSString* _changeNotes;
	NSDate* _date;
	NSString* _versionString;

}

@property (nonatomic,readonly) NSString * changeNotes;                //@synthesize changeNotes=_changeNotes - In the implementation block
@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * versionString;              //@synthesize versionString=_versionString - In the implementation block
+(id)dateFormatter;
-(NSString *)versionString;
-(NSDate *)date;
-(NSString *)changeNotes;
-(id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2 ;
@end

