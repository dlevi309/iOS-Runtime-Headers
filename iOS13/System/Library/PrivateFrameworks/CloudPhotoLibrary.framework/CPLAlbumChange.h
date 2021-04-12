/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLContainerChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying> {

	NSString* _keyAssetIdentifier;
	BOOL _albumSortAscending;
	unsigned long long _albumType;
	NSString* _name;
	long long _position;
	NSString* _parentIdentifier;
	unsigned long long _albumSortType;

}

@property (assign,nonatomic) unsigned long long albumType;                  //@synthesize albumType=_albumType - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long position;                            //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * parentIdentifier;                     //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long albumSortType;              //@synthesize albumSortType=_albumSortType - In the implementation block
@property (assign,nonatomic) BOOL albumSortAscending;                       //@synthesize albumSortAscending=_albumSortAscending - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(NSString *)parentIdentifier;
-(unsigned long long)albumSortType;
-(BOOL)albumSortAscending;
-(unsigned long long)albumType;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(void)setAlbumType:(unsigned long long)arg1 ;
-(void)setAlbumSortType:(unsigned long long)arg1 ;
-(void)setAlbumSortAscending:(BOOL)arg1 ;
-(id)propertiesDescription;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(BOOL)validateRecordForTracker:(id)arg1 ;
-(id)parentScopedIdentifier;
-(void)setParentScopedIdentifier:(id)arg1 ;
@end

