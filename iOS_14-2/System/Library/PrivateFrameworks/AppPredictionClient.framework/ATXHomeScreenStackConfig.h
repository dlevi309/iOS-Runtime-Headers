/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, ATXHomeScreenPage;

@interface ATXHomeScreenStackConfig : NSObject <NSSecureCoding> {

	BOOL _allowsNewWidget;
	BOOL _allowsSmartRotate;
	NSArray* _widgets;
	unsigned long long _stackLayoutSize;
	long long _coordinateRow;
	long long _coordinateColumn;
	NSString* _identifier;
	ATXHomeScreenPage* _page;

}

@property (assign,nonatomic) BOOL allowsNewWidget;                            //@synthesize allowsNewWidget=_allowsNewWidget - In the implementation block
@property (assign,nonatomic) BOOL allowsSmartRotate;                          //@synthesize allowsSmartRotate=_allowsSmartRotate - In the implementation block
@property (nonatomic,copy) NSArray * widgets;                                 //@synthesize widgets=_widgets - In the implementation block
@property (assign,nonatomic) unsigned long long stackLayoutSize;              //@synthesize stackLayoutSize=_stackLayoutSize - In the implementation block
@property (assign,nonatomic) long long coordinateRow;                         //@synthesize coordinateRow=_coordinateRow - In the implementation block
@property (assign,nonatomic) long long coordinateColumn;                      //@synthesize coordinateColumn=_coordinateColumn - In the implementation block
@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) ATXHomeScreenPage * page;                 //@synthesize page=_page - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setPage:(ATXHomeScreenPage *)arg1 ;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(id)compactDescription;
-(void)setStackLayoutSize:(unsigned long long)arg1 ;
-(ATXHomeScreenPage *)page;
-(id)init;
-(long long)coordinateRow;
-(void)setAllowsNewWidget:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)allowsNewWidget;
-(id)description;
-(void)setCoordinateRow:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)allowsSmartRotate;
-(void)setCoordinateColumn:(long long)arg1 ;
-(long long)coordinateColumn;
-(NSArray *)widgets;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAllowsSmartRotate:(BOOL)arg1 ;
-(void)setWidgets:(NSArray *)arg1 ;
-(unsigned long long)stackLayoutSize;
@end

