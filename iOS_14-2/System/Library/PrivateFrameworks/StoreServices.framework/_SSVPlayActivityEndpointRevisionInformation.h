/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet, NSString;

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _additionalPendingRevisionsIndexSet;
	unsigned long long _currentRevision;
	NSString* _revisionVersionToken;

}

@property (nonatomic,copy) NSIndexSet * additionalPendingRevisionsIndexSet;              //@synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet - In the implementation block
@property (assign,nonatomic) unsigned long long currentRevision;                         //@synthesize currentRevision=_currentRevision - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                              //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)currentRevision;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCurrentRevision:(unsigned long long)arg1 ;
-(NSIndexSet *)additionalPendingRevisionsIndexSet;
-(NSString *)revisionVersionToken;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(void)setAdditionalPendingRevisionsIndexSet:(NSIndexSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

