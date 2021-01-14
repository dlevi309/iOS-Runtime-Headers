/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID {

	unsigned _docID;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)rawID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)asString;
-(BOOL)isDocumentID;
-(id)description;
-(id)initWithDocID:(unsigned)arg1 ;
-(id)initWithDocIDNumber:(id)arg1 ;
-(id)documentID;
-(id)initWithCoder:(id)arg1 ;
@end

