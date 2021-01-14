/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchiverBase.h>
#import <TSPersistence/TSPKnownFieldRuleProvider.h>

@class TSPArchiverBase, NSString;

@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider> {

	RepeatedPtrField<TSP::FieldPath>* _fieldPathsToRemove;
	struct {
		unsigned hasPreserveNewerValueRule : 1;
		unsigned hasPreserveNewerValueUntilModifiedRule : 1;
	}  _flags;
	BOOL _isDiff;
	const FieldPath* _fieldPath;
	unsigned long long _diffReadVersion;
	TSPArchiverBase* _parentArchiver;

}

@property (nonatomic,readonly) const FieldPath* fieldPath;                                              //@synthesize fieldPath=_fieldPath - In the implementation block
@property (nonatomic,readonly) unsigned long long diffReadVersion;                                      //@synthesize diffReadVersion=_diffReadVersion - In the implementation block
@property (nonatomic,__weak,readonly) TSPArchiverBase * parentArchiver;                                 //@synthesize parentArchiver=_parentArchiver - In the implementation block
@property (nonatomic,readonly) const RepeatedPtrField<TSP::FieldPath>* fieldPathsToRemove; 
@property (nonatomic,readonly) BOOL isDiff;                                                             //@synthesize isDiff=_isDiff - In the implementation block
@property (nonatomic,readonly) BOOL isContentUnknown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObject:(id)arg1 ;
-(BOOL)isDiff;
-(void)dealloc;
-(id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const Message*)arg3 ;
-(void)removeField:(int)arg1 message:(const Message*)arg2 ;
-(id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int*)arg3 message:(const Message*)arg4 ;
-(const FieldPath*)baseFieldPathAndReturnShouldDeleteReturnedValue:(BOOL*)arg1 ;
-(id)initWithObject:(id)arg1 version:(unsigned long long)arg2 fieldPath:(const FieldPath*)arg3 isDiff:(BOOL)arg4 diffReadVersion:(unsigned long long)arg5 parentArchiver:(id)arg6 ;
-(id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 field:(int)arg3 message:(const Message*)arg4 ;
-(BOOL)isSavingDocumentAs;
-(BOOL)isSavingCollaborativeDocument;
-(const FieldPath*)fieldPath;
-(unsigned long long)diffReadVersion;
-(TSPArchiverBase *)parentArchiver;
-(const RepeatedPtrField<TSP::FieldPath>*)fieldPathsToRemove;
-(BOOL)isContentUnknown;
-(void)p_setPreserveNewerValueRuleForFieldPath:(int*)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const Message*)arg4 ;
-(void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int*)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const Message*)arg4 ;
-(id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int*)arg3 message:(const Message*)arg4 ;
-(void)enumerateKnownFieldRulesUsingBlock:(/*^block*/id)arg1 ;
-(void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const Message*)arg3 ;
-(void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const Message*)arg4 ;
-(void)setPreserveNewerValueRuleForFieldPath:(int*)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const Message*)arg3 ;
-(void)setPreserveNewerValueRuleForFieldPath:(int*)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const Message*)arg4 ;
-(void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const Message*)arg3 ;
-(void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const Message*)arg4 ;
-(void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int*)arg1 fileFormatVersion:(unsigned long long)arg2 message:(const Message*)arg3 ;
-(void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int*)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3 message:(const Message*)arg4 ;
-(void)removeFieldAtEndOfPath:(int*)arg1 message:(const Message*)arg2 ;
@end

