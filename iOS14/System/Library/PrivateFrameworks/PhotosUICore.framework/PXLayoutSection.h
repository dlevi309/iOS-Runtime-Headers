/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableDictionary, NSArray;

@interface PXLayoutSection : NSObject {

	NSMutableDictionary* _geometriesByKind;
	BOOL _accurate;
	unsigned long long _identifier;
	long long _index;
	NSArray* _geometryKinds;
	CGRect _frame;

}

@property (assign,nonatomic) unsigned long long identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isAccurate,nonatomic) BOOL accurate;              //@synthesize accurate=_accurate - In the implementation block
@property (assign,nonatomic) long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) CGRect frame;                                 //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) NSArray * geometryKinds;                      //@synthesize geometryKinds=_geometryKinds - In the implementation block
-(long long)index;
-(id)init;
-(CGSize)size;
-(void)setIndex:(long long)arg1 ;
-(BOOL)isAccurate;
-(CGRect)frame;
-(void)setGeometries:(id)arg1 withKind:(long long)arg2 ;
-(id)geometriesWithKind:(long long)arg1 ;
-(void)enumerateGeometriesWithBlock:(/*^block*/id)arg1 ;
-(void)setAccurate:(BOOL)arg1 ;
-(void)setGeometryKinds:(NSArray *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id)description;
-(void)setFrame:(CGRect)arg1 ;
-(unsigned long long)hash;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(NSArray *)geometryKinds;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

