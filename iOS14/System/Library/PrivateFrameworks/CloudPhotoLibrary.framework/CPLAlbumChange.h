/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLContainerChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying> {

	NSString* _keyAssetIdentifier;
	BOOL _albumSortAscending;
	unsigned long long _albumType;
	NSString* _name;
	long long _position;
	NSString* _parentIdentifier;
	unsigned long long _albumSortType;
	NSString* _projectDocumentType;
	NSData* _projectData;
	NSData* _projectPreviewImageData;

}

@property (assign,nonatomic) unsigned long long albumType;                  //@synthesize albumType=_albumType - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long position;                            //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * parentIdentifier;                     //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long albumSortType;              //@synthesize albumSortType=_albumSortType - In the implementation block
@property (assign,nonatomic) BOOL albumSortAscending;                       //@synthesize albumSortAscending=_albumSortAscending - In the implementation block
@property (nonatomic,copy) NSString * projectDocumentType;                  //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,copy) NSData * projectData;                            //@synthesize projectData=_projectData - In the implementation block
@property (nonatomic,copy) NSData * projectPreviewImageData;                //@synthesize projectPreviewImageData=_projectPreviewImageData - In the implementation block
-(long long)position;
-(NSString *)parentIdentifier;
-(NSString *)name;
-(unsigned long long)albumSortType;
-(BOOL)albumSortAscending;
-(NSData *)projectData;
-(NSString *)projectDocumentType;
-(void)setAlbumSortType:(unsigned long long)arg1 ;
-(void)setProjectPreviewImageData:(NSData *)arg1 ;
-(void)setAlbumSortAscending:(BOOL)arg1 ;
-(void)setAlbumType:(unsigned long long)arg1 ;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)projectPreviewImageData;
-(unsigned long long)albumType;
-(void)setProjectDocumentType:(NSString *)arg1 ;
-(void)setProjectData:(NSData *)arg1 ;
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

