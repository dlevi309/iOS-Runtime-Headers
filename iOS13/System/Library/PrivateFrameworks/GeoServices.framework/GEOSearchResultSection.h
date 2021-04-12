/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOSearchResultSection.h>
@class NSString;


@protocol GEOSearchResultSection
@property (assign,nonatomic) long long cellType; 
@property (nonatomic,copy) NSString * headerDisplayName; 
@property (nonatomic,copy) NSString * subHeaderDisplayName; 
@required
-(long long)cellType;
-(void)setCellType:(long long)arg1;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(id)arg1;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(id)arg1;

@end


@class NSString;

@interface GEOSearchResultSection : NSObject <GEOSearchResultSection> {

	long long _cellType;
	NSString* _headerDisplayName;
	NSString* _subHeaderDisplayName;

}

@property (assign,nonatomic) long long cellType;                         //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,copy) NSString * headerDisplayName;                 //@synthesize headerDisplayName=_headerDisplayName - In the implementation block
@property (nonatomic,copy) NSString * subHeaderDisplayName;              //@synthesize subHeaderDisplayName=_subHeaderDisplayName - In the implementation block
-(id)init;
-(id)initWithSearchResultSection:(id)arg1 ;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
-(NSString *)headerDisplayName;
-(void)setHeaderDisplayName:(NSString *)arg1 ;
-(NSString *)subHeaderDisplayName;
-(void)setSubHeaderDisplayName:(NSString *)arg1 ;
@end

