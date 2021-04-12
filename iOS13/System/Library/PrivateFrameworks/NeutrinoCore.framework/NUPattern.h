/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSSet, NSArray, NSString;

@interface NUPattern : NSObject {

	BOOL _isFixedOrder;

}

@property (nonatomic,readonly) NSSet * tokens; 
@property (nonatomic,readonly) BOOL isFixedOrder;                            //@synthesize isFixedOrder=_isFixedOrder - In the implementation block
@property (nonatomic,readonly) NSArray * shortestMatch; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) NSString * stringRepresentation; 
+(id)patternWithString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)scanString:(id)arg1 intoPattern:(out id*)arg2 error:(out id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
-(BOOL)match:(id)arg1 ;
-(NSString *)stringRepresentation;
-(NSSet *)tokens;
-(BOOL)isDetermisitic;
-(NSArray *)shortestMatch;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isFixedOrder;
@end

