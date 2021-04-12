/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID {

	unsigned long long _ino;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)folderID;
-(id)initWithFileID:(unsigned long long)arg1 ;
-(id)asString;
-(unsigned long long)rawID;
-(BOOL)isFolderOrAliasID;
@end

