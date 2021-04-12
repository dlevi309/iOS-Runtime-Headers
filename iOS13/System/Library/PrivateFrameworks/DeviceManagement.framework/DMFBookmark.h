/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)URL;
-(NSArray *)children;
-(BOOL)isFolder;
-(id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4 ;
-(BOOL)_isFolderWithIdentifier:(id)arg1 ;
-(BOOL)isFavoritesFolder;
-(BOOL)isReadingListFolder;
@end

