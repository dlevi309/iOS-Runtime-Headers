/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString;

@interface StockDataSource : NSObject {

	long long _identifier;
	NSString* _name;
	NSString* _sourceDescription;

}

@property (assign,nonatomic) long long identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sourceDescription;                           //@synthesize sourceDescription=_sourceDescription - In the implementation block
@property (nonatomic,readonly) NSString * localizedSourceDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)localizedSourceDescription;
-(NSString *)name;
-(id)description;
-(NSString *)sourceDescription;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(long long)identifier;
-(void)setSourceDescription:(NSString *)arg1 ;
-(id)archiveDictionary;
@end

