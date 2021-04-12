/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/ATXDefaultHomeScreenItem.h>

@class NSArray, NSString;

@interface ATXDefaultWidgetStack : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem> {

	NSArray* _smallDefaultStack;
	NSArray* _mediumDefaultStack;
	NSArray* _largeDefaultStack;
	unsigned long long _suggestedSize;

}

@property (nonatomic,copy) NSArray * smallDefaultStack;                     //@synthesize smallDefaultStack=_smallDefaultStack - In the implementation block
@property (nonatomic,copy) NSArray * mediumDefaultStack;                    //@synthesize mediumDefaultStack=_mediumDefaultStack - In the implementation block
@property (nonatomic,copy) NSArray * largeDefaultStack;                     //@synthesize largeDefaultStack=_largeDefaultStack - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedSize;              //@synthesize suggestedSize=_suggestedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(unsigned long long)suggestedSize;
-(NSArray *)smallDefaultStack;
-(NSArray *)mediumDefaultStack;
-(NSArray *)largeDefaultStack;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSmallDefaultStack:(NSArray *)arg1 ;
-(void)setMediumDefaultStack:(NSArray *)arg1 ;
-(void)setLargeDefaultStack:(NSArray *)arg1 ;
-(void)setSuggestedSize:(unsigned long long)arg1 ;
-(id)_JSONCompatible:(id)arg1 ;
@end

