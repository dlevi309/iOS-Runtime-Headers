/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/PQLResultSetInitializer.h>

@class NSString, NSData;

@interface QLExternallyCachedThumbnailData : NSObject <PQLResultSetInitializer> {

	NSString* _itemIdentifier;
	NSData* _versionIdentifier;
	NSString* _fileExtension;
	unsigned long long _size;

}

@property (nonatomic,readonly) NSString * itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * versionIdentifier;              //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * fileExtension;                //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                 //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)size;
-(NSString *)itemIdentifier;
-(NSData *)versionIdentifier;
-(NSString *)fileExtension;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
@end

