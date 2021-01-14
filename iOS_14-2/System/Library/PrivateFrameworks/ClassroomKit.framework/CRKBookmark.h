/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface CRKBookmark : NSObject <NSSecureCoding> {

	NSString* _name;
	NSURL* _URL;
	NSArray* _children;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * children;                                                 //@synthesize children=_children - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (getter=isFavoritesFolder,nonatomic,readonly) BOOL favoritesFolder; 
@property (getter=isReadingListFolder,nonatomic,readonly) BOOL readingListFolder; 
+(BOOL)supportsSecureCoding;
+(id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3 ;
+(id)favoritesFolderWithChildren:(id)arg1 ;
+(id)readingListFolderWithChildren:(id)arg1 ;
+(id)folderWithName:(id)arg1 children:(id)arg2 ;
+(id)leafBookmarkWithName:(id)arg1 URL:(id)arg2 ;
-(NSArray *)children;
-(id)urlString;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isReadingListFolder;
-(BOOL)isFavoritesFolder;
-(id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4 ;
-(BOOL)isFolder;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setUrlString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isFolderWithIdentifier:(id)arg1 ;
-(id)childBookmarks;
-(void)setChildBookmarks:(id)arg1 ;
@end

