/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKComingSoonInfo : NSObject {

	BOOL _comingSoon;
	NSString* _dateString;
	NSString* _dateStringShort;
	NSString* _dateFormat;
	unsigned long long _precision;
	NSString* _brandID;

}

@property (getter=isComingSoon,nonatomic,readonly) BOOL comingSoon;              //@synthesize comingSoon=_comingSoon - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateString;                       //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateStringShort;                  //@synthesize dateStringShort=_dateStringShort - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateFormat;                       //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long precision;                     //@synthesize precision=_precision - In the implementation block
@property (nonatomic,copy,readonly) NSString * brandID;                          //@synthesize brandID=_brandID - In the implementation block
+(id)comingSoonItemsWithDictionaries:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)dateFormat;
-(unsigned long long)precision;
-(NSString *)dateString;
-(NSString *)brandID;
-(void)_initializeDatesStrings;
-(id)initWithDictionary:(id)arg1 brandID:(id)arg2 ;
-(BOOL)isComingSoon;
-(NSString *)dateStringShort;
@end

