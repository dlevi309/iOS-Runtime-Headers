/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface BRGeometry : NSObject <NSCoding> {

	BOOL _hasAmbiguousLayout;
	BOOL _isClipped;
	NSString* _name;
	NSString* _contentDescription;
	NSArray* _subitems;
	CGRect _absoluteFrame;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect absoluteFrame;                     //@synthesize absoluteFrame=_absoluteFrame - In the implementation block
@property (assign,nonatomic) BOOL hasAmbiguousLayout;                  //@synthesize hasAmbiguousLayout=_hasAmbiguousLayout - In the implementation block
@property (assign,nonatomic) BOOL isClipped;                           //@synthesize isClipped=_isClipped - In the implementation block
@property (nonatomic,copy) NSString * contentDescription;              //@synthesize contentDescription=_contentDescription - In the implementation block
@property (nonatomic,copy) NSArray * subitems;                         //@synthesize subitems=_subitems - In the implementation block
+(void)initialize;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)data;
-(BOOL)hasAmbiguousLayout;
-(NSString *)contentDescription;
-(id)initWithView:(id)arg1 ;
-(id)recursiveDescription;
-(NSArray *)subitems;
-(void)setSubitems:(NSArray *)arg1 ;
-(CGRect)absoluteFrame;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(void)setContentDescription:(NSString *)arg1 ;
-(void)setIsClipped:(BOOL)arg1 ;
-(BOOL)isClipped;
-(id)initWithView:(id)arg1 rootView:(id)arg2 ;
-(id)gatherSubviews:(id)arg1 ;
-(void)setHasAmbiguousLayout:(BOOL)arg1 ;
-(BOOL)isValidForGeometryValidation:(unsigned long long)arg1 offendingGeometry:(id*)arg2 ;
-(BOOL)isEqualToTemplate:(id)arg1 diagnostic:(id*)arg2 ;
@end

