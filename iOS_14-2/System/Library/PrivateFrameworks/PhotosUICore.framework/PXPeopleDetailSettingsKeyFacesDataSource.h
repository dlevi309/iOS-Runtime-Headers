/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPeopleDetailSettingsDataSource.h>

@class NSString, NSArray;

@interface PXPeopleDetailSettingsKeyFacesDataSource : NSObject <PXPeopleDetailSettingsDataSource> {

	NSString* _title;
	NSArray* _keyFaces;

}

@property (nonatomic,retain) NSArray * keyFaces;                              //@synthesize keyFaces=_keyFaces - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) BOOL hasMoreDetails; 
@property (nonatomic,readonly) long long action; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfItems;
-(void)setTitle:(NSString *)arg1 ;
-(long long)action;
-(NSArray *)keyFaces;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)personNameAtIndex:(long long)arg1 ;
-(unsigned long long)faceCount:(long long)arg1 ;
-(long long)verifyTypeAtIndex:(long long)arg1 ;
-(id)modelObjectForIndex:(long long)arg1 ;
-(BOOL)hasMoreDetails;
-(id)initWithTitle:(id)arg1 keyFaces:(id)arg2 ;
-(void)setKeyFaces:(NSArray *)arg1 ;
-(NSString *)title;
@end

