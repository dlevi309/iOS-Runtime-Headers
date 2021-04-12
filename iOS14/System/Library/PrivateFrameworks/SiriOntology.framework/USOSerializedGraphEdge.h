/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface USOSerializedGraphEdge : NSObject <NSSecureCoding> {

	int _usoElementId;
	unsigned _enumeration;
	unsigned long long _fromVertex;
	unsigned long long _toVertex;
	NSString* _edgeLabel;

}

@property (assign) int usoElementId;                           //@synthesize usoElementId=_usoElementId - In the implementation block
@property (assign) unsigned long long fromVertex;              //@synthesize fromVertex=_fromVertex - In the implementation block
@property (assign) unsigned long long toVertex;                //@synthesize toVertex=_toVertex - In the implementation block
@property (assign) unsigned enumeration;                       //@synthesize enumeration=_enumeration - In the implementation block
@property (retain) NSString * edgeLabel;                       //@synthesize edgeLabel=_edgeLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)toVertex;
-(int)usoElementId;
-(void)setUsoElementId:(int)arg1 ;
-(unsigned long long)fromVertex;
-(unsigned)enumeration;
-(NSString *)edgeLabel;
-(id)initWithUsoElementId:(int)arg1 fromVertex:(unsigned long long)arg2 toVertex:(unsigned long long)arg3 enumeration:(unsigned)arg4 ;
-(void)setFromVertex:(unsigned long long)arg1 ;
-(void)setToVertex:(unsigned long long)arg1 ;
-(void)setEnumeration:(unsigned)arg1 ;
-(void)setEdgeLabel:(NSString *)arg1 ;
@end

