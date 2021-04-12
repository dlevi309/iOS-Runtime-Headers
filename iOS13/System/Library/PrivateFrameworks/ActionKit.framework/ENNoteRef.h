/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ENLinkedNotebookRef;

@interface ENNoteRef : NSObject <WFSerializableContent, NSCoding, NSCopying> {

	long long _type;
	NSString* _guid;
	ENLinkedNotebookRef* _linkedNotebook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * guid;                                     //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) ENLinkedNotebookRef * linkedNotebook;              //@synthesize linkedNotebook=_linkedNotebook - In the implementation block
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)noteRefFromData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)asData;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(id)wfSerializedRepresentation;
-(ENLinkedNotebookRef *)linkedNotebook;
-(void)setLinkedNotebook:(ENLinkedNotebookRef *)arg1 ;
@end

