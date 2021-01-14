/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSURL* _URL;
	NSArray* _children;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * children;                                        //@synthesize children=_children - In the implementation block
@property (getter=isFolder,nonatomic,readonly) BOOL folder; 
@property (getter=isFavoritesFolder,nonatomic,readonly) BOOL favoritesFolder; 
@property (getter=isReadingListFolder,nonatomic,readonly) BOOL readingListFolder; 
+(BOOL)supportsSecureCoding;
+(id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3 ;
+(id)favoritesFolderWithChildren:(id)arg1 ;
+(id)readingListFolderWithChildren:(id)arg1 ;
+(id)folderWithName:(id)arg1 children:(id)arg2 ;
+(id)leafBookmarkWithName:(id)arg1 URL:(id)arg2 ;
-(NSArray *)children;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isReadingListFolder;
-(BOOL)isFavoritesFolder;
-(id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4 ;
-(BOOL)_isFolderWithIdentifier:(id)arg1 ;
-(BOOL)isFolder;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

