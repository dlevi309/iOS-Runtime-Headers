/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
-(id)archiveDictionary;
-(NSString *)localizedSourceDescription;
-(NSString *)sourceDescription;
-(void)setSourceDescription:(NSString *)arg1 ;
@end

