/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@class NSString, NSArray, NSDictionary, NSNumber;

@interface AAJSON : NSObject {

	 value;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BOOL exists; 
@property (readonly,nonatomic) id any; 
@property (readonly,nonatomic) NSString * string; 
@property (readonly,nonatomic) NSArray * array; 
@property (readonly,nonatomic) NSDictionary * object; 
@property (readonly,nonatomic) NSNumber * number; 
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSNumber *)number;
-(id)init;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(BOOL)exists;
-(NSArray *)array;
-(NSDictionary *)object;
-(id)initWithData:(id)arg1 ;
-(id)any;
-(id)toDataWithOptions:(unsigned long long)arg1 :(id*)arg2 ;
-(NSString *)string;
@end

