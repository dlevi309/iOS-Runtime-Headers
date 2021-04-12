/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDocumentRevision : NSObject <NSCopying> {

	int _sequence;
	NSString* _identifier;

}

@property (nonatomic,readonly) int sequence;                           //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * revisionString; 
+(id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3 ;
+(id)revisionWithSequence:(int)arg1 identifier:(id)arg2 ;
+(id)revisionWithRevisionString:(id)arg1 ;
-(id)init;
-(id)description;
-(int)sequence;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSequence:(int)arg1 identifier:(id)arg2 ;
-(id)nextRevisionWithIdentifier:(id)arg1 ;
-(id)initWithRevisionString:(id)arg1 ;
-(NSString *)revisionString;
-(long long)compareSequenceFromRevision:(id)arg1 ;
@end

