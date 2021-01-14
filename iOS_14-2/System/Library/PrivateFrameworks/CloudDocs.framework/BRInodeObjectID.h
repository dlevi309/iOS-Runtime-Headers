/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID {

	unsigned long long _ino;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)rawID;
-(id)folderID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)asString;
-(id)initWithFileID:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isFolderOrAliasID;
-(id)initWithCoder:(id)arg1 ;
@end

