/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)itemIdentifier;
-(NSString *)fileExtension;
-(unsigned long long)size;
-(NSString *)description;
-(NSData *)versionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
@end

