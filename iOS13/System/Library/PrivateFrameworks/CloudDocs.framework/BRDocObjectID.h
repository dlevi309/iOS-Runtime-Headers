/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID {

	unsigned _docID;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)asString;
-(BOOL)isDocumentID;
-(id)documentID;
-(unsigned long long)rawID;
-(id)initWithDocID:(unsigned)arg1 ;
-(id)initWithDocIDNumber:(id)arg1 ;
@end

